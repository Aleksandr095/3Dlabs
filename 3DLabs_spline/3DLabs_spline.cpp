// 3DLabs_spline.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <fstream>

class Spline {
	

	private: 
		double(*in_points)[2];
		double(*out_points)[2];


	public:

		void set_in_points(double (*in_points)[2]) 
		{
				
		}

		double* get_in_points() 
		{
			return *in_points;
		}

		void set_out_points(double(*in_points)[2])
		{

		}

		double* get_out_points() 
		{
			return *out_points;
		}

		void readFile() 
		{
			std::fstream in;

			std::cout << "Чтение окончено" << std::endl;
		}

		void writeFile(double (*out_points)[2], int rowsCount) 
		{
			std::ofstream out;
			out.open("C://Users/aspodarev/Desktop/3Dlabs/points.txt");
			if (out.is_open())
			{
				int columnsCount = sizeof(*out_points) / sizeof(*out_points[0]);
				for (int i = 0; i < rowsCount; i++)
				{
					for (int j = 0; j < columnsCount; j++)
					{
						out << out_points[i][j] << "\t";
					}
					std::cout << std::endl;
				}
			}
			out.close();
		}
	

};

	int main()
	{


		return 0;
	};


