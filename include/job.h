#ifndef JOB_H
#define JOB_H

#include "types.h"
#include <string>

namespace job {
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
