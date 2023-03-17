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

	void Job_manager::create_new_job(string name, Priority priority) {
		Job job(this->job_map.size(), name, priority, Status::NOT_ASSIGNED); // Assign to the new job an incremental id based on the number of elements in job_map
		cout << "Created job: " <<  "id: " << job.get_id() << ", name: " << job.get_name() << ", priority: " << job.get_priority() << ", status: " << status_to_string(job.get_status()) << endl;
		this->job_map.insert(job.get_priority(), job);
	}

	void Job_manager::print_all_jobs() {
		for (QMultiMap<Priority, Job>::iterator iter = this->job_map.begin(); iter != this->job_map.end(); iter++) {
			cout << "Job: id: " << iter.value().get_id() << ", name: " << iter.value().get_name() << ", priority: " << iter.value().get_priority() << ", status: " << status_to_string(iter.value().get_status()) << endl;
		}
	}

	void Job_manager::work() {
		for (QMultiMap<Priority, Job>::iterator iter = this->job_map.begin(); iter != this->job_map.end(); iter++) {
			if (iter.value().get_status() == Status::NOT_ASSIGNED) iter.value().set_status(Status::WORKING);
		}
	}
} // namespace job
