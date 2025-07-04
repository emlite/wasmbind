#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WGSLLanguageFeatures : public emlite::Val {
    explicit WGSLLanguageFeatures(Handle h) noexcept;

public:
    explicit WGSLLanguageFeatures(const emlite::Val &val) noexcept;
    static WGSLLanguageFeatures take_ownership(Handle h) noexcept;

    WGSLLanguageFeatures clone() const noexcept;
};

