#ifndef _FOOD_HPP_
#define _FOOD_HPP_

#include "constants.hpp"
#include "sdl-plus-plus/drawing.h"
#include "snake.hpp"
#include <random>

namespace Game_logic {
Sdl::Point_vector all_points();
void remove_snake_points(Sdl::Point_vector&, const Snake&) noexcept;

class Food {
   public:
    void reposition(const Snake&) noexcept;
    Sdl::Point position() const noexcept;

   private:
    Sdl::Point position_{};
    std::random_device dev_{};
};
}  // End namespace Game_logic

#endif