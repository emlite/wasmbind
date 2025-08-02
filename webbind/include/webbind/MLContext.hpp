#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MLGraph;
class MLTensor;
class MLTensorDescriptor;
class MLOperandDescriptor;
class MLOpSupportLimits;
class MLContextLostInfo;


class MLTensorDescriptor : public emlite::Val {
  explicit MLTensorDescriptor(Handle h) noexcept;
public:
    static MLTensorDescriptor take_ownership(Handle h) noexcept;
    explicit MLTensorDescriptor(const emlite::Val &val) noexcept;
    MLTensorDescriptor() noexcept;
    [[nodiscard]] MLTensorDescriptor clone() const noexcept;
    [[nodiscard]] bool readable() const;
    void readable(bool value);
    [[nodiscard]] bool writable() const;
    void writable(bool value);
};

class MLOperandDescriptor : public emlite::Val {
  explicit MLOperandDescriptor(Handle h) noexcept;
public:
    static MLOperandDescriptor take_ownership(Handle h) noexcept;
    explicit MLOperandDescriptor(const emlite::Val &val) noexcept;
    MLOperandDescriptor() noexcept;
    [[nodiscard]] MLOperandDescriptor clone() const noexcept;
    [[nodiscard]] MLOperandDataType dataType() const;
    void dataType(const MLOperandDataType& value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> shape() const;
    void shape(jsbind::TypedArray<unsigned long> value);
};

class MLOpSupportLimits : public emlite::Val {
  explicit MLOpSupportLimits(Handle h) noexcept;
public:
    static MLOpSupportLimits take_ownership(Handle h) noexcept;
    explicit MLOpSupportLimits(const emlite::Val &val) noexcept;
    MLOpSupportLimits() noexcept;
    [[nodiscard]] MLOpSupportLimits clone() const noexcept;
    [[nodiscard]] jsbind::Any where() const;
    void where(const jsbind::Any& value);
};

class MLContextLostInfo : public emlite::Val {
  explicit MLContextLostInfo(Handle h) noexcept;
public:
    static MLContextLostInfo take_ownership(Handle h) noexcept;
    explicit MLContextLostInfo(const emlite::Val &val) noexcept;
    MLContextLostInfo() noexcept;
    [[nodiscard]] MLContextLostInfo clone() const noexcept;
    [[nodiscard]] jsbind::String message() const;
    void message(const jsbind::String& value);
};

/// The MLContext class.
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
    /// Getter of the `lost` attribute.
    /// [`MLContext.lost`](https://developer.mozilla.org/en-US/docs/Web/API/MLContext/lost)
    [[nodiscard]] jsbind::Promise<MLContextLostInfo> lost() const;
};

