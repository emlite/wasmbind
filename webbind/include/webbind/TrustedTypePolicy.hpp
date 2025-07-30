#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class TrustedHTML;
class TrustedScript;
class TrustedScriptURL;


class TrustedTypePolicy : public emlite::Val {
    explicit TrustedTypePolicy(Handle h) noexcept;

public:
    explicit TrustedTypePolicy(const emlite::Val &val) noexcept;
    static TrustedTypePolicy take_ownership(Handle h) noexcept;

    TrustedTypePolicy clone() const noexcept;
    jsbind::String name() const;
    TrustedHTML createHTML(const jsbind::String& input, const jsbind::Any& arguments);
    TrustedScript createScript(const jsbind::String& input, const jsbind::Any& arguments);
    TrustedScriptURL createScriptURL(const jsbind::String& input, const jsbind::Any& arguments);
};

