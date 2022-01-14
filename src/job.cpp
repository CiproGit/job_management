#include "job.h"

using namespace std;

namespace job {
	Job::Job(unsigned int id, string name, int priority, Status status) {
		this->id = id;
		this->name = name;
		this->priority = priority;
		this->status = status;
	}

	Job::~Job() {}

	unsigned int Job::get_id() const {
		return this->id;
	}

	string Job::get_name() const {
		return this->name;
	}

	int Job::get_priority() const {
		return this->priority;
	}

	Status Job::get_status() const {
		return this->status;
	}

	void Job::set_status(Status status) {
		this->status = status;
	}
} // namespace job
