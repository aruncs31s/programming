import React from 'react';
import Chart from 'chart.js';
import { Line } from 'react-chartjs-2';

const labels = ['0:00', '1:00', '2:00', '3:00', '4:00', '5:00', '6:00', '7:00', '8:00', '9:00', '10:00', '11:00', '12:00', '13:00', '14:00', '15:00', '16:00', '17:00', '18:00', '19:00', '20:00', '21:00', '22:00', '23:00'];
const data = {
  labels: labels,
  datasets: [
    {
      lable: 'Temperature',
      backgroundColor: "rgb(255, 99, 132)",
      borderColor: "rgb(255, 99, 132)",
      data: [0, 10, 5, 2, 20, 30, 45],
    },
  ],
};
const LineChart = () => {
  return (
    <div>
      <Line data={data} />
    </div>
  );
};
export default LineChart;
