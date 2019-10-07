/*
 * File: platform.h
 * Author: Minjun Xu (mjxu96@gmail.com)
 * File Created: Monday, 7th October 2019 3:19:54 pm
 */

#ifndef MELLOCOLATE_PLATFORM_H_
#define MELLOCOLATE_PLATFORM_H_

#include "platform/frontend_proxy/frontend_proxy.h"
#include "platform/carla_proxy/carla_proxy.h"

namespace mellocolate {

class Platform {
public:
  Platform() = default;
  void Run();
private:
  void Init();
  std::shared_ptr<FrontendProxy> frontend_proxy_{nullptr};
  std::shared_ptr<CarlaProxy> carla_proxy_{nullptr};
};

}


#endif