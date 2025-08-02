#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PresentationRequest;
class PresentationReceiver;


/// The Presentation class.
/// [`Presentation`](https://developer.mozilla.org/en-US/docs/Web/API/Presentation)
class Presentation : public emlite::Val {
    explicit Presentation(Handle h) noexcept;

public:
    explicit Presentation(const emlite::Val &val) noexcept;
    static Presentation take_ownership(Handle h) noexcept;

    [[nodiscard]] Presentation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `defaultRequest` attribute.
    /// [`Presentation.defaultRequest`](https://developer.mozilla.org/en-US/docs/Web/API/Presentation/defaultRequest)
    [[nodiscard]] PresentationRequest defaultRequest() const;
    /// Setter of the `defaultRequest` attribute.
    /// [`Presentation.defaultRequest`](https://developer.mozilla.org/en-US/docs/Web/API/Presentation/defaultRequest)
    void defaultRequest(const PresentationRequest& value);
    /// Getter of the `receiver` attribute.
    /// [`Presentation.receiver`](https://developer.mozilla.org/en-US/docs/Web/API/Presentation/receiver)
    [[nodiscard]] PresentationReceiver receiver() const;
};

