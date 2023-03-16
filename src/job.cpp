#include "job.h"

using namespace std;

namespace job {
	Status string_to_status(string s) {
		if (s == "not assigned") return Status::NOT_ASSIGNED;
		if (s == "working") return Status::WORKING;
		if (s == "done") return Status::DONE;

		throw invalid_argument("invalid string_to_status argument");
	}

	string status_to_string(Status s) {
		if (s == Status::NOT_ASSIGNED) return "not assigned";
		if (s == Status::WORKING) return "working";
		if (s == Status::DONE) return "done";

		throw invalid_argument("invalid status_to_string argument");
	}

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
