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
    MLTensorDescriptor clone() const noexcept;
    bool readable() const;
    void readable(bool value);
    bool writable() const;
    void writable(bool value);
};

class MLOperandDescriptor : public emlite::Val {
  explicit MLOperandDescriptor(Handle h) noexcept;
public:
    static MLOperandDescriptor take_ownership(Handle h) noexcept;
    explicit MLOperandDescriptor(const emlite::Val &val) noexcept;
    MLOperandDescriptor() noexcept;
    MLOperandDescriptor clone() const noexcept;
    MLOperandDataType dataType() const;
    void dataType(const MLOperandDataType& value);
    jsbind::Sequence<unsigned long> shape() const;
    void shape(jsbind::Sequence<unsigned long> value);
};

class MLOpSupportLimits : public emlite::Val {
  explicit MLOpSupportLimits(Handle h) noexcept;
public:
    static MLOpSupportLimits take_ownership(Handle h) noexcept;
    explicit MLOpSupportLimits(const emlite::Val &val) noexcept;
    MLOpSupportLimits() noexcept;
    MLOpSupportLimits clone() const noexcept;
    jsbind::Any where() const;
    void where(const jsbind::Any& value);
};

class MLContextLostInfo : public emlite::Val {
  explicit MLContextLostInfo(Handle h) noexcept;
public:
    static MLContextLostInfo take_ownership(Handle h) noexcept;
    explicit MLContextLostInfo(const emlite::Val &val) noexcept;
    MLContextLostInfo() noexcept;
    MLContextLostInfo clone() const noexcept;
    jsbind::DOMString message() const;
    void message(const jsbind::DOMString& value);
};

class MLContext : public emlite::Val {
    explicit MLContext(Handle h) noexcept;

public:
    explicit MLContext(const emlite::Val &val) noexcept;
    static MLContext take_ownership(Handle h) noexcept;

    MLContext clone() const noexcept;
    jsbind::Undefined dispatch(const MLGraph& graph, const jsbind::Any& inputs, const jsbind::Any& outputs);
    jsbind::Promise createTensor(const MLTensorDescriptor& descriptor);
    jsbind::Promise createConstantTensor(const MLOperandDescriptor& descriptor, const jsbind::Any& inputData);
    jsbind::Promise readTensor(const MLTensor& tensor, const jsbind::Any& outputData);
    jsbind::Undefined writeTensor(const MLTensor& tensor, const jsbind::Any& inputData);
    MLOpSupportLimits opSupportLimits();
    jsbind::Undefined destroy();
    jsbind::Promise lost() const;
};

