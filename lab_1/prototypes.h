#pragma once

namespace interface {
	int read_number();
	int read_number_from_file (const char* path);

	namespace main {
		void show_menu();
		//void settings();
		bool handle_menu();
	}

	//double* read_numbers(double& arr, int n);
	//double** read_numbers(double** arr, int x, int y);
	namespace sem_3 {
		double* input_yourself();
		double* input_default();
		double* input_from_file(const char* path);

		void input_menu(double& array, int* length, bool* input_empty);
		void show_menu();
		void handle_menu();
		void menu();

		void subtask_1(double& array, int length);
		void subtask_2(double& array, int length);
		void subtask_3(double& array, int length);
	}

	namespace sem_4 {
		void input_menu();

		void input_yourself();
		void input_default();
		void input_from_file();

		void show_menu();
		void handle_menu();
		void menu();

		void subtask_1();
		void subtask_2();
	}

	namespace sem_5 {
		void input_menu();

		void input_yourself();
		void input_default();
		void input_from_file();

		void show_menu();
		void handle_menu();
		void menu();
	}
}
namespace not_interface {
	namespace sem_3 {
		double* input_check(double& arr, int n);
		double* sum_of_positives(double& arr, int n);
		double* product_of_positives(double& arr, int n);
		double* quick_sort(double& arr, int n);
		double* offer_to_choose_min_max(double& arr, int n);
	}

	namespace sem_4 {
		double* input_check(double& arr, int n);
		double* sort(double& arr, int n);
		double* sum_of_even_positives(double& arr, int n);
	}

	namespace sem_5 {

		double* input_check(double& arr, int n);
	}
}
