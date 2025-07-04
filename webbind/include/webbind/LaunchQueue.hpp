#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class LaunchQueue : public emlite::Val {
    explicit LaunchQueue(Handle h) noexcept;

public:
    explicit LaunchQueue(const emlite::Val &val) noexcept;
    static LaunchQueue take_ownership(Handle h) noexcept;

    LaunchQueue clone() const noexcept;
    jsbind::Undefined setConsumer(const jsbind::Function& consumer);
};

