// Based on "Design Patterns: Elements of Reusable Object-Oriented Software"
// book by Erich Gamma, John Vlissides, Ralph Johnson, and Richard Helm 
//
// Created by Bartosz Rachwal. The National Institute of Advanced Industrial Science and Technology, Japan.

#ifndef STRUCTURAL_BRIDGE_WINDOW_H_
#define STRUCTURAL_BRIDGE_WINDOW_H_

#include "window_interface.h"
#include "window_imp.h"

namespace structural
{
namespace bridge
{
class Window :public WindowInterface
{
	public:
	explicit Window(WindowImp* imp);
	~Window() override;

	virtual void DrawRect(const commons::Point<float>& p1, const commons::Point<float>& p2) override;
	virtual void DrawText(const std::string& text, const commons::Point<float>&) override = 0;

	protected:
	WindowImp *GetWindowImp() const;

	private:
	WindowImp* imp_;
};
}
}

#endif

