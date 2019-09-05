/**=============================================================================+
 * file name: tea.h
 * created  : 2019.09.05
+=============================================================================*/
#pragma once

namespace ithelp {

enum TeaKind : int
{
	kIDontWantToKnow = 0,
	kBlackTea,
	kMilkTea,
};


class Tea
{
public:
	Tea() = default;
	virtual ~Tea() = default;
};

std::unique_ptr<Tea> MakeTea(TeaKind kind);

} // namespace 'ithelp'
