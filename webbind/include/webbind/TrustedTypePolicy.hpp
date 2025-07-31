#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class TrustedHTML;
class TrustedScript;
class TrustedScriptURL;


/// The TrustedTypePolicy class.
/// [`TrustedTypePolicy`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicy)
class TrustedTypePolicy : public emlite::Val {
    explicit TrustedTypePolicy(Handle h) noexcept;

public:
    explicit TrustedTypePolicy(const emlite::Val &val) noexcept;
    static TrustedTypePolicy take_ownership(Handle h) noexcept;

    [[nodiscard]] TrustedTypePolicy clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`TrustedTypePolicy.name`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicy/name)
    [[nodiscard]] jsbind::String name() const;
    /// The createHTML method.
    /// [`TrustedTypePolicy.createHTML`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicy/createHTML)
    TrustedHTML createHTML(const jsbind::String& input, const jsbind::Any& arguments);
    /// The createScript method.
    /// [`TrustedTypePolicy.createScript`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicy/createScript)
    TrustedScript createScript(const jsbind::String& input, const jsbind::Any& arguments);
    /// The createScriptURL method.
    /// [`TrustedTypePolicy.createScriptURL`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicy/createScriptURL)
    TrustedScriptURL createScriptURL(const jsbind::String& input, const jsbind::Any& arguments);
};

