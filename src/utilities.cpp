#include "utilities.h"
#include "job_manager.h"

namespace utilities {
	void create_jobs() {
		job::Job_manager *job_manager = job::Job_manager::get_instance(); // Please note: it returns always the same instance

		job_manager->create_new_job("job_1", job::Priority::LOW);
		job_manager->create_new_job("job_2", job::Priority::LOW);
		job_manager->create_new_job("job_3", job::Priority::MEDIUM);
		job_manager->create_new_job("job_4", job::Priority::MEDIUM);
		job_manager->create_new_job("job_5", job::Priority::HIGH);
		job_manager->create_new_job("job_6", job::Priority::LOW);
	}

	void do_jobs() {
		job::Job_manager *job_manager = job::Job_manager::get_instance(); // Please note: it returns always the same instance

		job_manager->work();
	}
} // namespace utilities
