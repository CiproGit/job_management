#include "utilities.h"
#include "job_manager.h"
#include <iostream>

using namespace std;

int main(void) {
	cout << "**********************\n";
	cout << "*   JOB MANAGEMENT   *\n";
	cout << "**********************\n" << endl;

	utilities::create_jobs();

	cout << "\nJobs sorted by priority:" << endl;
	job::Job_manager *job_manager = job::Job_manager::get_instance(); // Please note: it returns always the same instance
	job_manager->print_all_jobs();

	cout << "\nExecuting jobs..." << endl;
	utilities::do_jobs();

	cout << "\nJobs sorted by priority:" << endl;
	job_manager->print_all_jobs();

	cout << "\nEnd" << endl;
	return EXIT_SUCCESS;
}
