#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MLGraph;
class MLTensor;
class MLTensorDescriptor;
class MLOperandDescriptor;
class MLOpSupportLimits;
class MLContextLostInfo;

/// Interface MLContext
/// [`MLContext`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext)
class MLContext : public emlite::Val {
    explicit MLContext(Handle h) noexcept;
public:
    explicit MLContext(const emlite::Val &val) noexcept;
    static MLContext take_ownership(Handle h) noexcept;
    [[nodiscard]] MLContext clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The dispatch method.
    /// [`MLContext.dispatch`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext/dispatch)
    jsbind::Undefined dispatch(const MLGraph& graph, const jsbind::Any& inputs, const jsbind::Any& outputs);
    /// The createTensor method.
    /// [`MLContext.createTensor`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext/createTensor)
    jsbind::Promise<MLTensor> createTensor(const MLTensorDescriptor& descriptor);
    /// The createConstantTensor method.
    /// [`MLContext.createConstantTensor`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext/createConstantTensor)
    jsbind::Promise<MLTensor> createConstantTensor(const MLOperandDescriptor& descriptor, const jsbind::Any& inputData);
    /// The readTensor method.
    /// [`MLContext.readTensor`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext/readTensor)
    jsbind::Promise<jsbind::Undefined> readTensor(const MLTensor& tensor, const jsbind::Any& outputData);
    /// The writeTensor method.
    /// [`MLContext.writeTensor`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext/writeTensor)
    jsbind::Undefined writeTensor(const MLTensor& tensor, const jsbind::Any& inputData);
    /// The opSupportLimits method.
    /// [`MLContext.opSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext/opSupportLimits)
    MLOpSupportLimits opSupportLimits();
    /// The destroy method.
    /// [`MLContext.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext/destroy)
    jsbind::Undefined destroy();
    /// [`MLContext.lost`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext/lost)
    /// [`MLContext.lost`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext/lost)
    [[nodiscard]] jsbind::Promise<MLContextLostInfo> lost() const;
};

} // namespace webbind