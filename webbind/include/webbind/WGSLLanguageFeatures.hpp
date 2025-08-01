#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WGSLLanguageFeatures class.
/// [`WGSLLanguageFeatures`](https://developer.mozilla.org/en-US/docs/Web/API/WGSLLanguageFeatures)
class WGSLLanguageFeatures : public emlite::Val {
    explicit WGSLLanguageFeatures(Handle h) noexcept;

public:
    explicit WGSLLanguageFeatures(const emlite::Val &val) noexcept;
    static WGSLLanguageFeatures take_ownership(Handle h) noexcept;

    [[nodiscard]] WGSLLanguageFeatures clone() const noexcept;
};

