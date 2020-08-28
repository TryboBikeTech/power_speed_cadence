#pragma once

#include <string>
#include <vector>

namespace PSC
{

class CsvGenerator
{
public:
	CsvGenerator( std::string _resultPath, std::string _delimiter = "\t" );

	void GenerateOutput();

	void PushColumn( std::string _name );

	void PushRow( std::string _name );

	void PushValue( std::string const & _name, std::string _value );

private:

	struct Row
	{
		std::string m_name;
		std::vector< std::string > m_value;
	};

	Row m_columns;
	std::vector< Row > m_rows;

	std::string m_resultPath;
	std::string m_delimiter;
};


}