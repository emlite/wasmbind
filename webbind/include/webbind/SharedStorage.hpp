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
    jsbind::DOMString withLock() const;
    void withLock(const jsbind::DOMString& value);
};

class SharedStorageWorkletOptions : public emlite::Val {
  explicit SharedStorageWorkletOptions(Handle h) noexcept;
public:
    static SharedStorageWorkletOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageWorkletOptions(const emlite::Val &val) noexcept;
    SharedStorageWorkletOptions() noexcept;
    SharedStorageWorkletOptions clone() const noexcept;
    jsbind::USVString dataOrigin() const;
    void dataOrigin(const jsbind::USVString& value);
};

class SharedStorage : public emlite::Val {
    explicit SharedStorage(Handle h) noexcept;

public:
    explicit SharedStorage(const emlite::Val &val) noexcept;
    static SharedStorage take_ownership(Handle h) noexcept;

    SharedStorage clone() const noexcept;
    jsbind::Promise<jsbind::DOMString> get(const jsbind::DOMString& key);
    jsbind::Promise<jsbind::Any> set(const jsbind::DOMString& key, const jsbind::DOMString& value);
    jsbind::Promise<jsbind::Any> set(const jsbind::DOMString& key, const jsbind::DOMString& value, const SharedStorageSetMethodOptions& options);
    jsbind::Promise<jsbind::Any> append(const jsbind::DOMString& key, const jsbind::DOMString& value);
    jsbind::Promise<jsbind::Any> append(const jsbind::DOMString& key, const jsbind::DOMString& value, const SharedStorageModifierMethodOptions& options);
    jsbind::Promise<jsbind::Any> delete_(const jsbind::DOMString& key);
    jsbind::Promise<jsbind::Any> delete_(const jsbind::DOMString& key, const SharedStorageModifierMethodOptions& options);
    jsbind::Promise<jsbind::Any> clear();
    jsbind::Promise<jsbind::Any> clear(const SharedStorageModifierMethodOptions& options);
    jsbind::Promise<jsbind::Any> batchUpdate(const jsbind::Sequence<SharedStorageModifierMethod>& methods);
    jsbind::Promise<jsbind::Any> batchUpdate(const jsbind::Sequence<SharedStorageModifierMethod>& methods, const SharedStorageModifierMethodOptions& options);
    jsbind::Promise<jsbind::Any> selectURL(const jsbind::DOMString& name, const jsbind::Sequence<SharedStorageUrlWithMetadata>& urls);
    jsbind::Promise<jsbind::Any> selectURL(const jsbind::DOMString& name, const jsbind::Sequence<SharedStorageUrlWithMetadata>& urls, const SharedStorageRunOperationMethodOptions& options);
    jsbind::Promise<jsbind::Any> run(const jsbind::DOMString& name);
    jsbind::Promise<jsbind::Any> run(const jsbind::DOMString& name, const SharedStorageRunOperationMethodOptions& options);
    jsbind::Promise<SharedStorageWorklet> createWorklet(const jsbind::USVString& moduleURL);
    jsbind::Promise<SharedStorageWorklet> createWorklet(const jsbind::USVString& moduleURL, const SharedStorageWorkletOptions& options);
    SharedStorageWorklet worklet() const;
    jsbind::Promise<unsigned long> length();
    jsbind::Promise<double> remainingBudget();
};

