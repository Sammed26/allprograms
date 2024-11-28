
    // Simulate real-time data updates
    const updateDashboard = () => {
      const density = (Math.random() * 10).toFixed(2);
      const alertBox = document.getElementById('alertBox');
      const historyList = document.getElementById('historyList');

      // Update crowd density
      document.getElementById('currentDensity').innerText = density;

      // Update alert box based on density
      if (density > 8) {
        alertBox.innerText = "High Crowd Density Detected!";
        alertBox.className = "alert";
      } else {
        alertBox.innerText = "No Alerts";
        alertBox.className = "alert success";
      }

      // Add historical data
      const time = new Date().toLocaleTimeString();
      const listItem = document.createElement('li');
      listItem.innerText = `Density: ${density} people/m² at ${time}`;
      if (historyList.childNodes.length > 10) {
        historyList.removeChild(historyList.lastChild);
      }
      historyList.insertBefore(listItem, historyList.firstChild);
    };

    setInterval(updateDashboard, 3500);
 