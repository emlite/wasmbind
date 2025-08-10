#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class XRSession;
class XRInputSource;

/// Dictionary type XRInputSourcesChangeEventInit
class XRInputSourcesChangeEventInit : public EventInit {
  explicit XRInputSourcesChangeEventInit(Handle h) noexcept;
public:
    static XRInputSourcesChangeEventInit take_ownership(Handle h) noexcept;
    explicit XRInputSourcesChangeEventInit(const emlite::Val &val) noexcept;
    XRInputSourcesChangeEventInit() noexcept;
    [[nodiscard]] XRInputSourcesChangeEventInit clone() const noexcept;
    /// Getter of the `session` attribute.
    [[nodiscard]] XRSession session() const;
    /// Setter of the `session` attribute.
    void session(const XRSession& value);
    /// Getter of the `added` attribute.
    [[nodiscard]] jsbind::TypedArray<XRInputSource> added() const;
    /// Setter of the `added` attribute.
    void added(const jsbind::TypedArray<XRInputSource>& value);
    /// Getter of the `removed` attribute.
    [[nodiscard]] jsbind::TypedArray<XRInputSource> removed() const;
    /// Setter of the `removed` attribute.
    void removed(const jsbind::TypedArray<XRInputSource>& value);
};

} // namespace webbind