#include<iostream>
#include<fstream>
#include<string>
int main()
{
	
	std::string str;
	std::ifstream image;
	image.open("../Documents/Sample.jpg");
		

	row =0;
	while(!image.eof())
	{
		image>>string;
		std::cout<<str;
		/*for i in range(len(line))
		{
			if(i != 0)
			{
				
				if(line[i-1]==255 and line[i]==216)
					std::cout<<"Start Of Image"<<std::endl;
				else if(line[i-1]==255 and line[i]==192)
					std::cout<<("Start Of Frame")<<std::endl;
				else if(line[i-1]==255 and line[i]==194)
					std::cout<<("Start Of Frame 2")<<std::endl;
				else if(line[i-1]==255 and line[i]==196)
					std::cout<<("Huffman Table")<<std::endl;
				else if(line[i-1]==255 and line[i]==219)
					std::cout<<("Quantization Table")<<std::endl;
				else if(line[i-1]==255 and line[i]==224)
					std::cout<<("APP0")<<std::endl;
				else if(line[i-1]==255 and line[i]==225)
					std::cout<<("APP1")<<std::endl;
				else if(line[i-1]==255 and line[i]==218)
					std::cout<<("Start Of Scan")<<std::endl;
				else if(line[i-1]==255 and line[i]==217)
					std::cout<<("End Of Image")<<std::endl;
				else if(line[i-1]==255 and line[i]==254)
					std::cout<<("Comment")<<std::endl;
				else if(line[i-1]==255 and line[i]==0)
					std::cout<<("byte")<<std::endl;
				else if(line[i-1]==255 ):
					std::cout<<("others")<<std::endl;
			}
		}*/
	}
}