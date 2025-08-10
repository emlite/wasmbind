#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PresentationRequest;
class PresentationReceiver;

/// Interface Presentation
/// [`Presentation`](https://developer.mozilla.org/en-US/docs/Web/API/Presentation)
class Presentation : public emlite::Val {
    explicit Presentation(Handle h) noexcept;
public:
    explicit Presentation(const emlite::Val &val) noexcept;
    static Presentation take_ownership(Handle h) noexcept;
    [[nodiscard]] Presentation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Presentation.defaultRequest`](https://developer.mozilla.org/en-US/docs/Web/API/Presentation/defaultRequest)
    /// [`Presentation.defaultRequest`](https://developer.mozilla.org/en-US/docs/Web/API/Presentation/defaultRequest)
    [[nodiscard]] PresentationRequest defaultRequest() const;
    /// Setter of the `defaultRequest` attribute.
    /// [`Presentation.defaultRequest`](https://developer.mozilla.org/en-US/docs/Web/API/Presentation/defaultRequest)
    void defaultRequest(const PresentationRequest& value);
    /// [`Presentation.receiver`](https://developer.mozilla.org/en-US/docs/Web/API/Presentation/receiver)
    /// [`Presentation.receiver`](https://developer.mozilla.org/en-US/docs/Web/API/Presentation/receiver)
    [[nodiscard]] PresentationReceiver receiver() const;
};

} // namespace webbind