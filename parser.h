#pragma once

#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

#include "lang_specs.h"


class Parser {

private:
  std::map<std::string, std::pair<u32, command_types>> command_codes;
  u32 parse_line(const std::string& command_line);

public:
  Parser(const std::map<std::string, std::pair<u32, command_types>>& command_codes);
  std::vector<u32> parse_file(const std::string& file_path);

};
