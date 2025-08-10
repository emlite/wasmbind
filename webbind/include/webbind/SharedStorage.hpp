#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SharedStorageSetMethodOptions.hpp"
#include "SharedStorageModifierMethodOptions.hpp"
#include "SharedStorageUrlWithMetadata.hpp"
#include "SharedStorageRunOperationMethodOptions.hpp"
#include "SharedStorageWorkletOptions.hpp"

namespace webbind {

class SharedStorageModifierMethod;
class SharedStorageWorklet;

/// Interface SharedStorage
/// [`SharedStorage`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage)
class SharedStorage : public emlite::Val {
    explicit SharedStorage(Handle h) noexcept;
public:
    explicit SharedStorage(const emlite::Val &val) noexcept;
    static SharedStorage take_ownership(Handle h) noexcept;
    [[nodiscard]] SharedStorage clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The get method.
    /// [`SharedStorage.get`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/get)
    jsbind::Promise<jsbind::String> get(const jsbind::String& key);
    /// The set method.
    /// [`SharedStorage.set`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/set)
    jsbind::Promise<jsbind::Any> set(const jsbind::String& key, const jsbind::String& value);
    /// The set method.
    /// [`SharedStorage.set`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/set)
    jsbind::Promise<jsbind::Any> set(const jsbind::String& key, const jsbind::String& value, const SharedStorageSetMethodOptions& options);
    /// The append method.
    /// [`SharedStorage.append`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/append)
    jsbind::Promise<jsbind::Any> append(const jsbind::String& key, const jsbind::String& value);
    /// The append method.
    /// [`SharedStorage.append`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/append)
    jsbind::Promise<jsbind::Any> append(const jsbind::String& key, const jsbind::String& value, const SharedStorageModifierMethodOptions& options);
    /// The delete method.
    /// [`SharedStorage.delete`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/delete)
    jsbind::Promise<jsbind::Any> delete_(const jsbind::String& key);
    /// The delete method.
    /// [`SharedStorage.delete`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/delete)
    jsbind::Promise<jsbind::Any> delete_(const jsbind::String& key, const SharedStorageModifierMethodOptions& options);
    /// The clear method.
    /// [`SharedStorage.clear`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/clear)
    jsbind::Promise<jsbind::Any> clear();
    /// The clear method.
    /// [`SharedStorage.clear`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/clear)
    jsbind::Promise<jsbind::Any> clear(const SharedStorageModifierMethodOptions& options);
    /// The batchUpdate method.
    /// [`SharedStorage.batchUpdate`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/batchUpdate)
    jsbind::Promise<jsbind::Any> batchUpdate(const jsbind::TypedArray<SharedStorageModifierMethod>& methods);
    /// The batchUpdate method.
    /// [`SharedStorage.batchUpdate`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/batchUpdate)
    jsbind::Promise<jsbind::Any> batchUpdate(const jsbind::TypedArray<SharedStorageModifierMethod>& methods, const SharedStorageModifierMethodOptions& options);
    /// The selectURL method.
    /// [`SharedStorage.selectURL`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/selectURL)
    jsbind::Promise<jsbind::Any> selectURL(const jsbind::String& name, const jsbind::TypedArray<SharedStorageUrlWithMetadata>& urls);
    /// The selectURL method.
    /// [`SharedStorage.selectURL`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/selectURL)
    jsbind::Promise<jsbind::Any> selectURL(const jsbind::String& name, const jsbind::TypedArray<SharedStorageUrlWithMetadata>& urls, const SharedStorageRunOperationMethodOptions& options);
    /// The run method.
    /// [`SharedStorage.run`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/run)
    jsbind::Promise<jsbind::Any> run(const jsbind::String& name);
    /// The run method.
    /// [`SharedStorage.run`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/run)
    jsbind::Promise<jsbind::Any> run(const jsbind::String& name, const SharedStorageRunOperationMethodOptions& options);
    /// The createWorklet method.
    /// [`SharedStorage.createWorklet`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/createWorklet)
    jsbind::Promise<SharedStorageWorklet> createWorklet(const jsbind::String& moduleURL);
    /// The createWorklet method.
    /// [`SharedStorage.createWorklet`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/createWorklet)
    jsbind::Promise<SharedStorageWorklet> createWorklet(const jsbind::String& moduleURL, const SharedStorageWorkletOptions& options);
    /// Getter of the `worklet` attribute.
    /// [`SharedStorage.worklet`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/worklet)
    [[nodiscard]] SharedStorageWorklet worklet() const;
    /// The length method.
    /// [`SharedStorage.length`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/length)
    jsbind::Promise<unsigned long> length();
    /// The remainingBudget method.
    /// [`SharedStorage.remainingBudget`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage/remainingBudget)
    jsbind::Promise<double> remainingBudget();
};

} // namespace webbind