#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class DOMStringList : public emlite::Val {
    explicit DOMStringList(Handle h) noexcept;

public:
    explicit DOMStringList(const emlite::Val &val) noexcept;
    static DOMStringList take_ownership(Handle h) noexcept;

    DOMStringList clone() const noexcept;
    unsigned long length() const;
    jsbind::String item(unsigned long index);
    bool contains(const jsbind::String& string);
};

