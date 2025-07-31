#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleDeclaration.hpp"
#include "enums.hpp"


/// The CSSFunctionDescriptors class.
/// [`CSSFunctionDescriptors`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionDescriptors)
class CSSFunctionDescriptors : public CSSStyleDeclaration {
    explicit CSSFunctionDescriptors(Handle h) noexcept;

public:
    explicit CSSFunctionDescriptors(const emlite::Val &val) noexcept;
    static CSSFunctionDescriptors take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSFunctionDescriptors clone() const noexcept;
    /// Getter of the `result` attribute.
    /// [`CSSFunctionDescriptors.result`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionDescriptors/result)
    [[nodiscard]] jsbind::String result() const;
    /// Setter of the `result` attribute.
    /// [`CSSFunctionDescriptors.result`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionDescriptors/result)
    void result(const jsbind::String& value);
};

