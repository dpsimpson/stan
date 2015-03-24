#ifndef STAN__INTERFACE_CALLBACKS__WRITER__NOOP_HPP
#define STAN__INTERFACE_CALLBACKS__WRITER__NOOP_HPP

#include <stan/interface_callbacks/writer/base_writer.hpp>

namespace stan {
  namespace interface_callbacks {
    namespace writer {
      
      class noop: public base_writer {
      public:
        void operator()(const std::string& key, double value) {}
        void operator()(const std::string& key, const std::string& value) {}
        void operator()(std::vector<std::string>& names) {}
        void operator()(std::vector<double>& state) {}
        void operator()() {}
        void operator()(const std::string& message) {}
      };

    }
  }
}

#endif