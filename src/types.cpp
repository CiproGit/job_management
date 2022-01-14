#include "types.h"

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
} // namespace job
