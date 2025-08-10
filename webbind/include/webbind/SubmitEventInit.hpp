#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class HTMLElement;

/// Dictionary type SubmitEventInit
/// [`SubmitEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/SubmitEventInit)
class SubmitEventInit : public EventInit {
  explicit SubmitEventInit(Handle h) noexcept;
public:
    static SubmitEventInit take_ownership(Handle h) noexcept;
    explicit SubmitEventInit(const emlite::Val &val) noexcept;
    SubmitEventInit() noexcept;
    [[nodiscard]] SubmitEventInit clone() const noexcept;
    [[nodiscard]] HTMLElement submitter() const;
    void submitter(const HTMLElement& value);
};

} // namespace webbind