#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class XRSession;
class XRInputSource;

/// Dictionary type XRInputSourcesChangeEventInit
/// [`XRInputSourcesChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourcesChangeEventInit)
class XRInputSourcesChangeEventInit : public EventInit {
  explicit XRInputSourcesChangeEventInit(Handle h) noexcept;
public:
    static XRInputSourcesChangeEventInit take_ownership(Handle h) noexcept;
    explicit XRInputSourcesChangeEventInit(const emlite::Val &val) noexcept;
    XRInputSourcesChangeEventInit() noexcept;
    [[nodiscard]] XRInputSourcesChangeEventInit clone() const noexcept;
    [[nodiscard]] XRSession session() const;
    void session(const XRSession& value);
    [[nodiscard]] jsbind::TypedArray<XRInputSource> added() const;
    void added(const jsbind::TypedArray<XRInputSource>& value);
    [[nodiscard]] jsbind::TypedArray<XRInputSource> removed() const;
    void removed(const jsbind::TypedArray<XRInputSource>& value);
};

} // namespace webbind