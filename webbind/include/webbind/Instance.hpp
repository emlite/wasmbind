#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Module;


class Instance : public emlite::Val {
    explicit Instance(Handle h) noexcept;

public:
    explicit Instance(const emlite::Val &val) noexcept;
    static Instance take_ownership(Handle h) noexcept;

    Instance clone() const noexcept;
    Instance(const Module& module_);
    Instance(const Module& module_, const jsbind::Object& importObject);
    jsbind::Object exports() const;
};

