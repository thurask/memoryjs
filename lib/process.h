#pragma once
#ifndef PROCESS_H
#define PROCESS_H
#define _GNU_SOURCE

#include <node.h>
#include <vector>
#include <unistd.h>
#include <cstdint>

using v8::Isolate;

class process {
public:
  process();
  ~process();

  pid_t openProcess(const char* processName, const char** errorMessage);
  //std::vector<pid_t> getProcesses(const char** errorMessage);
};

#endif
#pragma once
