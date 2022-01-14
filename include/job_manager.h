#ifndef JOB_MANAGER_H
#define JOB_MANAGER_H

#include "job.h"
#include <QMultiMap>
#include <QList>

namespace job {
	class Job_manager { // Singleton design pattern
	private:
		Job_manager();
		static Job_manager *instance;
		QMultiMap<int, Job> multi_map;
	public:
		static Job_manager *get_instance();
		virtual ~Job_manager();
		void create_new_job(std::string name, int priority);
		void print_all_jobs();
		void work();
	};
} // namespace job

#endif // JOB_MANAGER_H
