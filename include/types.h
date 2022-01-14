#ifndef TYPES_H
#define TYPES_H

#include <string>

namespace job {
	enum Priority : int {
		LOW,
		MEDIUM,
		HIGH
	};

	enum class Status : int {
		NOT_ASSIGNED,
		WORKING,
		DONE
	};

	Status string_to_status(std::string s); // It converts the given string in Status
	std::string status_to_string(Status s); // It converts the given Status in string
} // namespace job

#endif // TYPES_H
