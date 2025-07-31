#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The TransformStreamDefaultController class.
/// [`TransformStreamDefaultController`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStreamDefaultController)
class TransformStreamDefaultController : public emlite::Val {
    explicit TransformStreamDefaultController(Handle h) noexcept;

public:
    explicit TransformStreamDefaultController(const emlite::Val &val) noexcept;
    static TransformStreamDefaultController take_ownership(Handle h) noexcept;

    [[nodiscard]] TransformStreamDefaultController clone() const noexcept;
    /// Getter of the `desiredSize` attribute.
    /// [`TransformStreamDefaultController.desiredSize`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStreamDefaultController/desiredSize)
    [[nodiscard]] double desiredSize() const;
    /// The enqueue method.
    /// [`TransformStreamDefaultController.enqueue`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStreamDefaultController/enqueue)
    jsbind::Undefined enqueue();
    /// The enqueue method.
    /// [`TransformStreamDefaultController.enqueue`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStreamDefaultController/enqueue)
    jsbind::Undefined enqueue(const jsbind::Any& chunk);
    /// The error method.
    /// [`TransformStreamDefaultController.error`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStreamDefaultController/error)
    jsbind::Undefined error();
    /// The error method.
    /// [`TransformStreamDefaultController.error`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStreamDefaultController/error)
    jsbind::Undefined error(const jsbind::Any& reason);
    /// The terminate method.
    /// [`TransformStreamDefaultController.terminate`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStreamDefaultController/terminate)
    jsbind::Undefined terminate();
};

