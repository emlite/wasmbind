#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WebGLObject class.
/// [`WebGLObject`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLObject)
class WebGLObject : public emlite::Val {
    explicit WebGLObject(Handle h) noexcept;

public:
    explicit WebGLObject(const emlite::Val &val) noexcept;
    static WebGLObject take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLObject clone() const noexcept;
    /// Getter of the `label` attribute.
    /// [`WebGLObject.label`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLObject/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`WebGLObject.label`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLObject/label)
    void label(const jsbind::String& value);
};

