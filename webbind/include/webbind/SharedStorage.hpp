#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SharedStorageWorklet.hpp"
#include "enums.hpp"

class SharedStorageSetMethodOptions;
class SharedStorageModifierMethodOptions;
class SharedStorageModifierMethod;
class SharedStorageWorklet;
class SharedStorageWorkletOptions;


class SharedStorageSetMethodOptions : public emlite::Val {
  explicit SharedStorageSetMethodOptions(Handle h) noexcept;
public:
    static SharedStorageSetMethodOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageSetMethodOptions(const emlite::Val &val) noexcept;
    SharedStorageSetMethodOptions() noexcept;
    SharedStorageSetMethodOptions clone() const noexcept;
    bool ignoreIfPresent() const;
    void ignoreIfPresent(bool value);
};

class SharedStorageModifierMethodOptions : public emlite::Val {
  explicit SharedStorageModifierMethodOptions(Handle h) noexcept;
public:
    static SharedStorageModifierMethodOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageModifierMethodOptions(const emlite::Val &val) noexcept;
    SharedStorageModifierMethodOptions() noexcept;
    SharedStorageModifierMethodOptions clone() const noexcept;
    jsbind::String withLock() const;
    void withLock(const jsbind::String& value);
};

class SharedStorageWorkletOptions : public emlite::Val {
  explicit SharedStorageWorkletOptions(Handle h) noexcept;
public:
    static SharedStorageWorkletOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageWorkletOptions(const emlite::Val &val) noexcept;
    SharedStorageWorkletOptions() noexcept;
    SharedStorageWorkletOptions clone() const noexcept;
    jsbind::String dataOrigin() const;
    void dataOrigin(const jsbind::String& value);
};

class SharedStorage : public emlite::Val {
    explicit SharedStorage(Handle h) noexcept;

public:
    explicit SharedStorage(const emlite::Val &val) noexcept;
    static SharedStorage take_ownership(Handle h) noexcept;

    SharedStorage clone() const noexcept;
    jsbind::Promise<jsbind::String> get(const jsbind::String& key);
    jsbind::Promise<jsbind::Any> set(const jsbind::String& key, const jsbind::String& value);
    jsbind::Promise<jsbind::Any> set(const jsbind::String& key, const jsbind::String& value, const SharedStorageSetMethodOptions& options);
    jsbind::Promise<jsbind::Any> append(const jsbind::String& key, const jsbind::String& value);
    jsbind::Promise<jsbind::Any> append(const jsbind::String& key, const jsbind::String& value, const SharedStorageModifierMethodOptions& options);
    jsbind::Promise<jsbind::Any> delete_(const jsbind::String& key);
    jsbind::Promise<jsbind::Any> delete_(const jsbind::String& key, const SharedStorageModifierMethodOptions& options);
    jsbind::Promise<jsbind::Any> clear();
    jsbind::Promise<jsbind::Any> clear(const SharedStorageModifierMethodOptions& options);
    jsbind::Promise<jsbind::Any> batchUpdate(const jsbind::TypedArray<SharedStorageModifierMethod>& methods);
    jsbind::Promise<jsbind::Any> batchUpdate(const jsbind::TypedArray<SharedStorageModifierMethod>& methods, const SharedStorageModifierMethodOptions& options);
    jsbind::Promise<jsbind::Any> selectURL(const jsbind::String& name, const jsbind::TypedArray<SharedStorageUrlWithMetadata>& urls);
    jsbind::Promise<jsbind::Any> selectURL(const jsbind::String& name, const jsbind::TypedArray<SharedStorageUrlWithMetadata>& urls, const SharedStorageRunOperationMethodOptions& options);
    jsbind::Promise<jsbind::Any> run(const jsbind::String& name);
    jsbind::Promise<jsbind::Any> run(const jsbind::String& name, const SharedStorageRunOperationMethodOptions& options);
    jsbind::Promise<SharedStorageWorklet> createWorklet(const jsbind::String& moduleURL);
    jsbind::Promise<SharedStorageWorklet> createWorklet(const jsbind::String& moduleURL, const SharedStorageWorkletOptions& options);
    SharedStorageWorklet worklet() const;
    jsbind::Promise<unsigned long> length();
    jsbind::Promise<double> remainingBudget();
};

