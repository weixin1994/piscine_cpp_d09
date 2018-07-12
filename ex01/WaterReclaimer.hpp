#ifndef WATERRECLAIMER_HPP_
#define WATERRECLAIMER_HPP_

#include <cstddef>
#include "BaseComponent.hpp"

class WaterReclaimer : public BaseComponent 
{
	public:
		WaterReclaimer();
		virtual ~WaterReclaimer() {}

		void start();
		void generateWater();
		void useWater(int water);

	private:
		int _water;
		bool _started;
};

#endif 
