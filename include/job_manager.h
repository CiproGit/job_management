#ifndef JOB_MANAGER_H
#define JOB_MANAGER_H

#include "job.h"
#include <QMultiMap>

namespace job {
	class Job_manager { // Singleton design pattern
	private:
		Job_manager();
		static Job_manager *instance;
		QMultiMap<Priority, Job> job_map; // Sorted by Priority
	public:
		static Job_manager *get_instance();
		virtual ~Job_manager();
		void create_new_job(std::string name, Priority priority); // It creates the new job and inserts it into job_map
		void print_all_jobs(); // It prints all jobs in job_map sorted by Priority
		void work(); // All jobs in job_map with Status NOT_ASSIGNED become WORKING
	};
} // namespace job

#endif // JOB_MANAGER_H
