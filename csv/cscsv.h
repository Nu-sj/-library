#ifndef  CS_CSV_H
#define  CS_CSV_H
#include <iostream>
#include <unordered_map>
#include <json/json.hpp>
using json = nlohmann::json;

class CSCSV {
 public:
  CSCSV();
  ~CSCSV();
  bool ReadConfig();
  void GetAllTags();
  void GetAllInterval();
  bool GetAllRealTimePoint();
  bool WriteResult();
  bool GetReferenceStartPoint();
  bool GetDataStartPoint();
 private:
  std::unordered_map<std::string, std::string> all_tag_name_;
  std::unordered_map<std::string, std::vector<int>>all_tag_interval_;
  json config_js_;
  std::vector<std::vector<uint64_t>> all_time_point_;
  std::unordered_map<std::string, std::vector<int>>all_tag_time_;
  std::vector<uint64_t>all_reference_start_;
  std::vector<std::vector<float>> all_real_time_point_;
  std::vector<std::vector<uint64_t>>all_data_start_;
};





#endif