#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SourceBuffer.hpp"

namespace webbind {

/// Interface ManagedSourceBuffer
/// [`ManagedSourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedSourceBuffer)
class ManagedSourceBuffer : public SourceBuffer {
    explicit ManagedSourceBuffer(Handle h) noexcept;
public:
    explicit ManagedSourceBuffer(const emlite::Val &val) noexcept;
    static ManagedSourceBuffer take_ownership(Handle h) noexcept;
    [[nodiscard]] ManagedSourceBuffer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ManagedSourceBuffer.onbufferedchange`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedSourceBuffer/onbufferedchange)
    /// [`ManagedSourceBuffer.onbufferedchange`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedSourceBuffer/onbufferedchange)
    [[nodiscard]] jsbind::Any onbufferedchange() const;
    /// Setter of the `onbufferedchange` attribute.
    /// [`ManagedSourceBuffer.onbufferedchange`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedSourceBuffer/onbufferedchange)
    void onbufferedchange(const jsbind::Any& value);
};

} // namespace webbind