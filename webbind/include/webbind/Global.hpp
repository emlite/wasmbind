#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class Global : public emlite::Val {
    explicit Global(Handle h) noexcept;

public:
    explicit Global(const emlite::Val &val) noexcept;
    static Global take_ownership(Handle h) noexcept;

    Global clone() const noexcept;
    Global(const jsbind::Any& descriptor);
    Global(const jsbind::Any& descriptor, const jsbind::Any& v);
    jsbind::Any valueOf();
    jsbind::Any value() const;
    void value(const jsbind::Any& value);
};

