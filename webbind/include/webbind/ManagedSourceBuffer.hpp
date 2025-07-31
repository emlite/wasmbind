#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SourceBuffer.hpp"
#include "enums.hpp"


/// The ManagedSourceBuffer class.
/// [`ManagedSourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedSourceBuffer)
class ManagedSourceBuffer : public SourceBuffer {
    explicit ManagedSourceBuffer(Handle h) noexcept;

public:
    explicit ManagedSourceBuffer(const emlite::Val &val) noexcept;
    static ManagedSourceBuffer take_ownership(Handle h) noexcept;

    [[nodiscard]] ManagedSourceBuffer clone() const noexcept;
    /// Getter of the `onbufferedchange` attribute.
    /// [`ManagedSourceBuffer.onbufferedchange`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedSourceBuffer/onbufferedchange)
    [[nodiscard]] jsbind::Any onbufferedchange() const;
    /// Setter of the `onbufferedchange` attribute.
    /// [`ManagedSourceBuffer.onbufferedchange`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedSourceBuffer/onbufferedchange)
    void onbufferedchange(const jsbind::Any& value);
};

