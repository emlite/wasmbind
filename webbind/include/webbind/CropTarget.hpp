#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CropTarget;
class Element;


class CropTarget : public emlite::Val {
    explicit CropTarget(Handle h) noexcept;

public:
    explicit CropTarget(const emlite::Val &val) noexcept;
    static CropTarget take_ownership(Handle h) noexcept;

    CropTarget clone() const noexcept;
    static jsbind::Promise<CropTarget> fromElement(const Element& element);
};

