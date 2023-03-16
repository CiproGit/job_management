#ifndef JOB_H
#define JOB_H

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

	class Job {
	private:
		unsigned int id;
		std::string name;
		int priority;
		Status status;
	public:
		Job(unsigned int id, std::string name, int priority, Status status);
		virtual ~Job();
		unsigned int get_id() const;
		std::string get_name() const;
		int get_priority() const;
		Status get_status() const;
		void set_status(Status status);
	};
} // namespace job

#endif // JOB_H
