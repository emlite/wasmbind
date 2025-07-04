#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class External : public emlite::Val {
    explicit External(Handle h) noexcept;

public:
    explicit External(const emlite::Val &val) noexcept;
    static External take_ownership(Handle h) noexcept;

    External clone() const noexcept;
    jsbind::Undefined AddSearchProvider();
    jsbind::Undefined IsSearchProviderInstalled();
};

