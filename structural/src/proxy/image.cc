// Based on "Design Patterns: Elements of Reusable Object-Oriented Software"
// book by Erich Gamma, John Vlissides, Ralph Johnson, and Richard Helm 
//
// Created by Bartosz Rachwal. The National Institute of Advanced Industrial Science and Technology, Japan.

#include "image.h"

namespace structural
{
namespace proxy
{
Image::Image(const std::string& file_name)
{
	extent_ = commons::Point<float>(100, 20);
}

Image::~Image() { }

void Image::Draw(const commons::Point<float>& at)
{
	if (at.x() > extent_.x())
	{
		extent_.x(at.x());
	}
	if (at.x() > extent_.y())
	{
		extent_.y(at.y());
	}
}

void Image::HandleMouse(Event& event) { }

void Image::Load(std::istream& from) { }

void Image::Save(std::ostream& to) { }

const commons::Point<float> &Image::GetExtent()
{
	return extent_;
}
}
}

