import matplotlib.pyplot as plt
# Define technical knowledge requirements by sector (approximate percentages).
technical_knowledge = {
    "Sectors": ["IT", "Manufacturing", "Automation", "Agriculture", "Healthcare", "Retail"],
    "Technical Knowledge Requirement (%)": [80, 70, 75, 20, 50, 40]
}

# Plot the technical knowledge requirements.
plt.figure(figsize=(10, 6))
plt.bar(technical_knowledge["Sectors"], technical_knowledge["Technical Knowledge Requirement (%)"], color="green")
plt.title("Estimated Technical Knowledge Requirement by Sector")
plt.xlabel("Sectors")
plt.ylabel("Requirement (%)")
plt.grid(axis='y', linestyle='--', alpha=0.7)
plt.show()
