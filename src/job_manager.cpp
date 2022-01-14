#include "job_manager.h"
#include <iostream>

using namespace std;

namespace job {
	Job_manager *Job_manager::instance = nullptr;

	Job_manager::Job_manager() {}

	Job_manager::~Job_manager() {}

	Job_manager *Job_manager::get_instance() {
		if (instance == nullptr) instance = new Job_manager();
		return instance;
	}

	void Job_manager::create_new_job(string name, int priority) {
		Job job(this->multi_map.size(), name, priority, Status::NOT_ASSIGNED);
		cout << "Created job: " <<  "id: " << job.get_id() << ", name: " << job.get_name() << ", priority: " << job.get_priority() << ", status: " << status_to_string(job.get_status()) << endl;
		this->multi_map.insert(job.get_priority(), job);
	}

	void Job_manager::print_all_jobs() {
		for (QMultiMap<int, Job>::iterator iter = this->multi_map.begin(); iter != this->multi_map.end(); iter++) {
			cout << "Job: id: " << iter.value().get_id() << ", name: " << iter.value().get_name() << ", priority: " << iter.value().get_priority() << ", status: " << status_to_string(iter.value().get_status()) << endl;
		}
	}

	void Job_manager::work() {
		for (QMultiMap<int, Job>::iterator iter = this->multi_map.begin(); iter != this->multi_map.end(); iter++) {
			if (iter.value().get_status() == Status::NOT_ASSIGNED) iter.value().set_status(Status::WORKING);
		}
	}
} // namespace job
